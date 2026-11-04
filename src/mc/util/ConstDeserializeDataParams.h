#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/MinEngineVersion.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
namespace Json { class Value; }
// clang-format on

struct ConstDeserializeDataParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Json::Value const&>      mValue;
    ::ll::TypedStorage<8, 24, ::SemVersion const>       mFormatVersion;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion const> mMinEngineVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstDeserializeDataParams& operator=(ConstDeserializeDataParams const&);
    ConstDeserializeDataParams(ConstDeserializeDataParams const&);
    ConstDeserializeDataParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ConstDeserializeDataParams(::DeserializeDataParams const& deserializeDataParams);

#ifdef LL_PLAT_C
    MCNAPI ConstDeserializeDataParams(::Json::Value const& value, ::ConstDeserializeDataParams const& parent);

    MCNAPI ConstDeserializeDataParams(
        ::Json::Value const&      value,
        ::SemVersion const&       formatVersion,
        ::MinEngineVersion const& minEngineVersion
    );
#endif

    MCNAPI ~ConstDeserializeDataParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DeserializeDataParams const& deserializeDataParams);

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Json::Value const& value, ::ConstDeserializeDataParams const& parent);

    MCNAPI void*
    $ctor(::Json::Value const& value, ::SemVersion const& formatVersion, ::MinEngineVersion const& minEngineVersion);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
