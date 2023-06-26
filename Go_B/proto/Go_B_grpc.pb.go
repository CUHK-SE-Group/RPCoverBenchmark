// Code generated by protoc-gen-go-grpc. DO NOT EDIT.
// versions:
// - protoc-gen-go-grpc v1.2.0
// - protoc             v3.21.8
// source: protos/Go_B.proto

package proto

import (
	context "context"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
)

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
// Requires gRPC-Go v1.32.0 or later.
const _ = grpc.SupportPackageIsVersion7

// Go_BClient is the client API for Go_B service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://pkg.go.dev/google.golang.org/grpc/?tab=doc#ClientConn.NewStream.
type Go_BClient interface {
	Go_B_1(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error)
	Go_B_2(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error)
	Go_B_3(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error)
}

type go_BClient struct {
	cc grpc.ClientConnInterface
}

func NewGo_BClient(cc grpc.ClientConnInterface) Go_BClient {
	return &go_BClient{cc}
}

func (c *go_BClient) Go_B_1(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error) {
	out := new(CommonMessage)
	err := c.cc.Invoke(ctx, "/protos.Go_B/Go_B_1", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *go_BClient) Go_B_2(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error) {
	out := new(CommonMessage)
	err := c.cc.Invoke(ctx, "/protos.Go_B/Go_B_2", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *go_BClient) Go_B_3(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error) {
	out := new(CommonMessage)
	err := c.cc.Invoke(ctx, "/protos.Go_B/Go_B_3", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// Go_BServer is the server API for Go_B service.
// All implementations must embed UnimplementedGo_BServer
// for forward compatibility
type Go_BServer interface {
	Go_B_1(context.Context, *CommonMessage) (*CommonMessage, error)
	Go_B_2(context.Context, *CommonMessage) (*CommonMessage, error)
	Go_B_3(context.Context, *CommonMessage) (*CommonMessage, error)
	mustEmbedUnimplementedGo_BServer()
}

// UnimplementedGo_BServer must be embedded to have forward compatible implementations.
type UnimplementedGo_BServer struct {
}

func (UnimplementedGo_BServer) Go_B_1(context.Context, *CommonMessage) (*CommonMessage, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Go_B_1 not implemented")
}
func (UnimplementedGo_BServer) Go_B_2(context.Context, *CommonMessage) (*CommonMessage, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Go_B_2 not implemented")
}
func (UnimplementedGo_BServer) Go_B_3(context.Context, *CommonMessage) (*CommonMessage, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Go_B_3 not implemented")
}
func (UnimplementedGo_BServer) mustEmbedUnimplementedGo_BServer() {}

// UnsafeGo_BServer may be embedded to opt out of forward compatibility for this service.
// Use of this interface is not recommended, as added methods to Go_BServer will
// result in compilation errors.
type UnsafeGo_BServer interface {
	mustEmbedUnimplementedGo_BServer()
}

func RegisterGo_BServer(s grpc.ServiceRegistrar, srv Go_BServer) {
	s.RegisterService(&Go_B_ServiceDesc, srv)
}

func _Go_B_Go_B_1_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(CommonMessage)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(Go_BServer).Go_B_1(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/protos.Go_B/Go_B_1",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(Go_BServer).Go_B_1(ctx, req.(*CommonMessage))
	}
	return interceptor(ctx, in, info, handler)
}

func _Go_B_Go_B_2_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(CommonMessage)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(Go_BServer).Go_B_2(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/protos.Go_B/Go_B_2",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(Go_BServer).Go_B_2(ctx, req.(*CommonMessage))
	}
	return interceptor(ctx, in, info, handler)
}

func _Go_B_Go_B_3_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(CommonMessage)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(Go_BServer).Go_B_3(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/protos.Go_B/Go_B_3",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(Go_BServer).Go_B_3(ctx, req.(*CommonMessage))
	}
	return interceptor(ctx, in, info, handler)
}

// Go_B_ServiceDesc is the grpc.ServiceDesc for Go_B service.
// It's only intended for direct use with grpc.RegisterService,
// and not to be introspected or modified (even as a copy)
var Go_B_ServiceDesc = grpc.ServiceDesc{
	ServiceName: "protos.Go_B",
	HandlerType: (*Go_BServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "Go_B_1",
			Handler:    _Go_B_Go_B_1_Handler,
		},
		{
			MethodName: "Go_B_2",
			Handler:    _Go_B_Go_B_2_Handler,
		},
		{
			MethodName: "Go_B_3",
			Handler:    _Go_B_Go_B_3_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "protos/Go_B.proto",
}
