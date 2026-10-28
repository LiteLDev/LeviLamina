#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class EduExternalScreenController : public ::MinecraftScreenController {
public:
    // EduExternalScreenController inner types define
    using StorageLocationChangedCallback = ::std::function<void()>;

    using WorldCountCallback = ::std::function<uint64()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<uint64()>> mWorldCountCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>   mStorageLocationChangedCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    EduExternalScreenController();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduExternalScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::function<void()>                   storageLocationChangedCallback,
        ::std::function<uint64()>                 worldCountCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::function<void()>                   storageLocationChangedCallback,
        ::std::function<uint64()>                 worldCountCallback
    );
    // NOLINTEND
};
