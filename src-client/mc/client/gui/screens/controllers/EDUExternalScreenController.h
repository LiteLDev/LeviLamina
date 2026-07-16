#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

class EDUExternalScreenController : public ::MinecraftScreenController {
public:
    // EDUExternalScreenController inner types define
    using StorageLocationChangedCallback = ::std::function<void()>;

    using WorldCountCallback = ::std::function<uint64()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<uint64()>> mWorldCountCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>   mStorageLocationChangedCallback;
    // NOLINTEND
};
