// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/Cpp_A.proto

package src.main.benchmark;

public final class CppA {
  private CppA() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\022protos/Cpp_A.proto\022\006protos\032\024protos/mes" +
      "sage.proto2\270\001\n\005Cpp_A\0229\n\007Cpp_A_1\022\025.protos" +
      ".CommonMessage\032\025.protos.CommonMessage\"\000\022" +
      "9\n\007Cpp_A_2\022\025.protos.CommonMessage\032\025.prot" +
      "os.CommonMessage\"\000\0229\n\007Cpp_A_3\022\025.protos.C" +
      "ommonMessage\032\025.protos.CommonMessage\"\000B\035\n" +
      "\022src.main.benchmarkZ\007./protob\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          src.main.benchmark.Message.getDescriptor(),
        });
    src.main.benchmark.Message.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
