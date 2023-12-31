// Code generated by protoc-gen-go-grpc. DO NOT EDIT.
// versions:
// - protoc-gen-go-grpc v1.2.0
// - protoc             v3.21.8
// source: protos/Ts_A.proto

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

// Ts_AClient is the client API for Ts_A service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://pkg.go.dev/google.golang.org/grpc/?tab=doc#ClientConn.NewStream.
type Ts_AClient interface {
	Ts_A_1(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error)
	Ts_A_2(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error)
	Ts_A_3(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error)
}

type ts_AClient struct {
	cc grpc.ClientConnInterface
}

func NewTs_AClient(cc grpc.ClientConnInterface) Ts_AClient {
	return &ts_AClient{cc}
}

func (c *ts_AClient) Ts_A_1(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error) {
	out := new(CommonMessage)
	err := c.cc.Invoke(ctx, "/protos.Ts_A/Ts_A_1", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *ts_AClient) Ts_A_2(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error) {
	out := new(CommonMessage)
	err := c.cc.Invoke(ctx, "/protos.Ts_A/Ts_A_2", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *ts_AClient) Ts_A_3(ctx context.Context, in *CommonMessage, opts ...grpc.CallOption) (*CommonMessage, error) {
	out := new(CommonMessage)
	err := c.cc.Invoke(ctx, "/protos.Ts_A/Ts_A_3", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// Ts_AServer is the server API for Ts_A service.
// All implementations must embed UnimplementedTs_AServer
// for forward compatibility
type Ts_AServer interface {
	Ts_A_1(context.Context, *CommonMessage) (*CommonMessage, error)
	Ts_A_2(context.Context, *CommonMessage) (*CommonMessage, error)
	Ts_A_3(context.Context, *CommonMessage) (*CommonMessage, error)
	mustEmbedUnimplementedTs_AServer()
}

// UnimplementedTs_AServer must be embedded to have forward compatible implementations.
type UnimplementedTs_AServer struct {
}

func (UnimplementedTs_AServer) Ts_A_1(context.Context, *CommonMessage) (*CommonMessage, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Ts_A_1 not implemented")
}
func (UnimplementedTs_AServer) Ts_A_2(context.Context, *CommonMessage) (*CommonMessage, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Ts_A_2 not implemented")
}
func (UnimplementedTs_AServer) Ts_A_3(context.Context, *CommonMessage) (*CommonMessage, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Ts_A_3 not implemented")
}
func (UnimplementedTs_AServer) mustEmbedUnimplementedTs_AServer() {}

// UnsafeTs_AServer may be embedded to opt out of forward compatibility for this service.
// Use of this interface is not recommended, as added methods to Ts_AServer will
// result in compilation errors.
type UnsafeTs_AServer interface {
	mustEmbedUnimplementedTs_AServer()
}

func RegisterTs_AServer(s grpc.ServiceRegistrar, srv Ts_AServer) {
	s.RegisterService(&Ts_A_ServiceDesc, srv)
}

func _Ts_A_Ts_A_1_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(CommonMessage)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(Ts_AServer).Ts_A_1(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/protos.Ts_A/Ts_A_1",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(Ts_AServer).Ts_A_1(ctx, req.(*CommonMessage))
	}
	return interceptor(ctx, in, info, handler)
}

func _Ts_A_Ts_A_2_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(CommonMessage)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(Ts_AServer).Ts_A_2(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/protos.Ts_A/Ts_A_2",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(Ts_AServer).Ts_A_2(ctx, req.(*CommonMessage))
	}
	return interceptor(ctx, in, info, handler)
}

func _Ts_A_Ts_A_3_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(CommonMessage)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(Ts_AServer).Ts_A_3(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/protos.Ts_A/Ts_A_3",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(Ts_AServer).Ts_A_3(ctx, req.(*CommonMessage))
	}
	return interceptor(ctx, in, info, handler)
}

// Ts_A_ServiceDesc is the grpc.ServiceDesc for Ts_A service.
// It's only intended for direct use with grpc.RegisterService,
// and not to be introspected or modified (even as a copy)
var Ts_A_ServiceDesc = grpc.ServiceDesc{
	ServiceName: "protos.Ts_A",
	HandlerType: (*Ts_AServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "Ts_A_1",
			Handler:    _Ts_A_Ts_A_1_Handler,
		},
		{
			MethodName: "Ts_A_2",
			Handler:    _Ts_A_Ts_A_2_Handler,
		},
		{
			MethodName: "Ts_A_3",
			Handler:    _Ts_A_Ts_A_3_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "protos/Ts_A.proto",
}
