#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/resources/MinEngineVersion.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130 { struct ActorDefinitions; }
// clang-format on

struct ActorDocumentDataParams {
public:
    // ActorDocumentDataParams inner types define
    using Definitions = ::SharedTypes::v1_21_130::ActorDefinitions;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_21_130::ActorDefinitions&> mValue;
    ::ll::TypedStorage<8, 24, ::SemVersion const>                         mFormatVersion;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion const>                   mMinEngineVersion;
    ::ll::TypedStorage<1, 1, bool const>                                  mIsBaseGamePack;
    ::ll::TypedStorage<1, 1, ::JsonBetaState const>                       mCanUseBeta;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDocumentDataParams& operator=(ActorDocumentDataParams const&);
    ActorDocumentDataParams();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDocumentDataParams(::ActorDocumentDataParams const&);

    MCAPI ActorDocumentDataParams(
        ::SharedTypes::v1_21_130::ActorDefinitions& value,
        ::SemVersion const&                         formatVersion,
        ::MinEngineVersion const&                   minEngineVersion,
        bool                                        isBaseGamePack,
        ::JsonBetaState                             canUseBeta
    );

    MCAPI ~ActorDocumentDataParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDocumentDataParams const&);

    MCAPI void* $ctor(
        ::SharedTypes::v1_21_130::ActorDefinitions& value,
        ::SemVersion const&                         formatVersion,
        ::MinEngineVersion const&                   minEngineVersion,
        bool                                        isBaseGamePack,
        ::JsonBetaState                             canUseBeta
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
