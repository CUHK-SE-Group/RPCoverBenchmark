// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.28.1
// 	protoc        v3.20.3
// source: protos/Java_C.proto

package proto

import (
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

var File_protos_Java_C_proto protoreflect.FileDescriptor

var file_protos_Java_C_proto_rawDesc = []byte{
	0x0a, 0x13, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x73, 0x2f, 0x4a, 0x61, 0x76, 0x61, 0x5f, 0x43, 0x2e,
	0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x73, 0x1a, 0x14, 0x70,
	0x72, 0x6f, 0x74, 0x6f, 0x73, 0x2f, 0x6d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x2e, 0x70, 0x72,
	0x6f, 0x74, 0x6f, 0x32, 0xbc, 0x01, 0x0a, 0x06, 0x4a, 0x61, 0x76, 0x61, 0x5f, 0x43, 0x12, 0x3a,
	0x0a, 0x08, 0x4a, 0x61, 0x76, 0x61, 0x5f, 0x43, 0x5f, 0x31, 0x12, 0x15, 0x2e, 0x70, 0x72, 0x6f,
	0x74, 0x6f, 0x73, 0x2e, 0x43, 0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0x4d, 0x65, 0x73, 0x73, 0x61, 0x67,
	0x65, 0x1a, 0x15, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x73, 0x2e, 0x43, 0x6f, 0x6d, 0x6d, 0x6f,
	0x6e, 0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x22, 0x00, 0x12, 0x3a, 0x0a, 0x08, 0x4a, 0x61,
	0x76, 0x61, 0x5f, 0x43, 0x5f, 0x32, 0x12, 0x15, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x73, 0x2e,
	0x43, 0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x1a, 0x15, 0x2e,
	0x70, 0x72, 0x6f, 0x74, 0x6f, 0x73, 0x2e, 0x43, 0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0x4d, 0x65, 0x73,
	0x73, 0x61, 0x67, 0x65, 0x22, 0x00, 0x12, 0x3a, 0x0a, 0x08, 0x4a, 0x61, 0x76, 0x61, 0x5f, 0x43,
	0x5f, 0x33, 0x12, 0x15, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x73, 0x2e, 0x43, 0x6f, 0x6d, 0x6d,
	0x6f, 0x6e, 0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x1a, 0x15, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x73, 0x2e, 0x43, 0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65,
	0x22, 0x00, 0x42, 0x09, 0x5a, 0x07, 0x2e, 0x2f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x06, 0x70,
	0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var file_protos_Java_C_proto_goTypes = []interface{}{
	(*CommonMessage)(nil), // 0: protos.CommonMessage
}
var file_protos_Java_C_proto_depIdxs = []int32{
	0, // 0: protos.Java_C.Java_C_1:input_type -> protos.CommonMessage
	0, // 1: protos.Java_C.Java_C_2:input_type -> protos.CommonMessage
	0, // 2: protos.Java_C.Java_C_3:input_type -> protos.CommonMessage
	0, // 3: protos.Java_C.Java_C_1:output_type -> protos.CommonMessage
	0, // 4: protos.Java_C.Java_C_2:output_type -> protos.CommonMessage
	0, // 5: protos.Java_C.Java_C_3:output_type -> protos.CommonMessage
	3, // [3:6] is the sub-list for method output_type
	0, // [0:3] is the sub-list for method input_type
	0, // [0:0] is the sub-list for extension type_name
	0, // [0:0] is the sub-list for extension extendee
	0, // [0:0] is the sub-list for field type_name
}

func init() { file_protos_Java_C_proto_init() }
func file_protos_Java_C_proto_init() {
	if File_protos_Java_C_proto != nil {
		return
	}
	file_protos_message_proto_init()
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_protos_Java_C_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   0,
			NumExtensions: 0,
			NumServices:   1,
		},
		GoTypes:           file_protos_Java_C_proto_goTypes,
		DependencyIndexes: file_protos_Java_C_proto_depIdxs,
	}.Build()
	File_protos_Java_C_proto = out.File
	file_protos_Java_C_proto_rawDesc = nil
	file_protos_Java_C_proto_goTypes = nil
	file_protos_Java_C_proto_depIdxs = nil
}
