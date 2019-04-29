#include "angel_wings.h"
#include "wings_socket.h"
using namespace wings;

void Dart_WingsSocket_getPort(Dart_NativeArguments arguments)
{
    uint64_t ptr;
    Dart_Handle pointerHandle = Dart_GetNativeArgument(arguments, 0);
    HandleError(Dart_IntegerToUint64(pointerHandle, &ptr));

    auto* socket = (WingsSocket*) ptr;
    auto outHandle = Dart_NewIntegerFromUint64(socket->getInfo().port);
    Dart_SetReturnValue(arguments, outHandle);
}

void Dart_WingsSocket_write(Dart_NativeArguments arguments)
{
    // TODO: Actually do something.
}

void Dart_WingsSocket_closeDescriptor(Dart_NativeArguments arguments)
{
    // TODO: Actually do something.
}

void Dart_WingsSocket_close(Dart_NativeArguments arguments)
{
    // TODO: Actually do something.
}