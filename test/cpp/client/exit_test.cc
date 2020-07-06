#include <grpcpp/grpcpp.h>

int main() {
  auto channel = grpc::CreateChannel("127.0.0.1:12345",
                                     grpc::InsecureChannelCredentials());
  return 0;
}
