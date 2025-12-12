#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

struct StyleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkf79c11;
    ::ll::UntypedStorage<4, 16> mUnke1929c;
    ::ll::UntypedStorage<4, 16> mUnk478334;
    ::ll::UntypedStorage<4, 4>  mUnk57cc6f;
    ::ll::UntypedStorage<8, 32> mUnk86c251;
    ::ll::UntypedStorage<4, 4>  mUnkfbcc5c;
    ::ll::UntypedStorage<1, 1>  mUnk9f49ae;
    ::ll::UntypedStorage<8, 32> mUnkcdbf86;
    ::ll::UntypedStorage<8, 32> mUnk5aceee;
    ::ll::UntypedStorage<1, 1>  mUnk8f6efa;
    ::ll::UntypedStorage<4, 4>  mUnk414662;
    ::ll::UntypedStorage<1, 1>  mUnk887419;
    ::ll::UntypedStorage<4, 16> mUnkdb91b8;
    ::ll::UntypedStorage<1, 1>  mUnk879b4f;
    ::ll::UntypedStorage<4, 4>  mUnk39d82a;
    ::ll::UntypedStorage<4, 4>  mUnk27712a;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~StyleData() = default;
#else // LL_PLAT_C
    virtual ~StyleData();
#endif

    virtual void parse(::Json::Value const& customObject);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C StyleData();

    MCNAPI_C StyleData(::StyleData const&);

    MCNAPI_C ::mce::Color _getColorFromObject(
        ::Json::Value const& customObject,
        ::std::string const& fieldName,
        ::mce::Color         defaultColor
    ) const;

    MCNAPI_C ::StyleData& operator=(::StyleData const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::string sanitizeStringForPlatform(::std::string const& label);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::StyleData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $parse(::Json::Value const& customObject);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
