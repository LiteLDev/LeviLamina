#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/puv/ComponentStorageLoadDataRefVariant.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/resources/MinEngineVersion.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Beta { struct ActorDefinitions; }
namespace SharedTypes::v1_26_30 { struct ActorDefinitions; }
// clang-format on

struct ActorDocumentDataParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::ComponentStorageLoadDataRefVariant<
            ::SharedTypes::v1_26_30::ActorDefinitions,
            ::SharedTypes::Beta::ActorDefinitions>>
                                                        mValue;
    ::ll::TypedStorage<8, 24, ::SemVersion const>       mFormatVersion;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion const> mMinEngineVersion;
    ::ll::TypedStorage<1, 1, bool const>                mIsBaseGamePack;
    ::ll::TypedStorage<1, 1, ::JsonBetaState const>     mCanUseBeta;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDocumentDataParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
