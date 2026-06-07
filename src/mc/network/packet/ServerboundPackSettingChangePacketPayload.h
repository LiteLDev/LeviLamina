#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

struct ServerboundPackSettingChangePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                mPackId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mSettingName;
    ::ll::TypedStorage<8, 40, ::std::variant<float, bool, ::std::string>> mSettingValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerboundPackSettingChangePacketPayload& operator=(ServerboundPackSettingChangePacketPayload const&);
    ServerboundPackSettingChangePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerboundPackSettingChangePacketPayload(::ServerboundPackSettingChangePacketPayload const&);

#ifdef LL_PLAT_C
    MCAPI ServerboundPackSettingChangePacketPayload(
        ::mce::UUID const&                         packId,
        ::std::string const&                       settingName,
        ::std::variant<float, bool, ::std::string> settingValue
    );
#endif

    MCAPI ~ServerboundPackSettingChangePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerboundPackSettingChangePacketPayload const&);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::mce::UUID const&                         packId,
        ::std::string const&                       settingName,
        ::std::variant<float, bool, ::std::string> settingValue
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
