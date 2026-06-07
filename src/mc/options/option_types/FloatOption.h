#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

class FloatOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const> VALUE_MIN;
    ::ll::TypedStorage<4, 4, float const> VALUE_MAX;
    ::ll::TypedStorage<4, 4, float>       mValue;
    ::ll::TypedStorage<4, 4, float>       mDefaultValue;
    ::ll::TypedStorage<4, 4, float const> DELTA;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    FloatOption();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;
#else // LL_PLAT_C
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void load(::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual void load(::std::string const& valueString) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI FloatOption(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        float                value,
        float                valueMin,
        float                rangeMax,
        float                rangeDelta
    );

    MCFOLD float getDefault() const;

    MCAPI void set(float v, bool saveOptionChange);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        float                value,
        float                valueMin,
        float                rangeMax,
        float                rangeDelta
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector);

    MCAPI void $load(::std::string const& valueString);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
