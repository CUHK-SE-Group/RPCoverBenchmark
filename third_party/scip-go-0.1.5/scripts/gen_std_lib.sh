#!/bin/bash


cat > ./internal/loader/stdlib.go << EOT
// THIS FILE IS GENERATED. SEE ./scripts/gen_std_lib.sh
EOT

echo "// Generated by: $(go version)" >> ./internal/loader/stdlib.go

cat >> ./internal/loader/stdlib.go << EOT
package loader

var contained = struct{}{}

// This list is calculated from "go list std".
var stdPackages = map[string]struct{}{
EOT

# Runs golist, replaces all the subsequent sub packages with nothing
# and the sorts, and uniqs them, to then print them out into strings
# in a map

go list std \
    | sed 's:/.*$::' \
    | sort \
    | uniq \
    | awk '{ print "\""$0"\": contained,"}' >> ./internal/loader/stdlib.go

echo "}" >> ./internal/loader/stdlib.go

go fmt ./internal/loader/stdlib.go
