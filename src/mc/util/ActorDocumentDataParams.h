#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
namespace SharedTypes::v1_21_90 { struct ActorDefinitions; }
// clang-format on

struct ActorDocumentDataParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk285543;
    ::ll::UntypedStorage<8, 24> mUnk4b99f1;
    ::ll::UntypedStorage<8, 32> mUnkd3c737;
    ::ll::UntypedStorage<1, 1>  mUnk6b732f;
    ::ll::UntypedStorage<1, 1>  mUnka6ee3a;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDocumentDataParams& operator=(ActorDocumentDataParams const&);
    ActorDocumentDataParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDocumentDataParams(::ActorDocumentDataParams const&);

    MCNAPI ActorDocumentDataParams(
        ::SharedTypes::v1_21_90::ActorDefinitions& value,
        ::SemVersion const&                        formatVersion,
        ::MinEngineVersion const&                  minEngineVersion,
        bool                                       isBaseGamePack,
        ::JsonBetaState                            canUseBeta
    );

    MCNAPI ~ActorDocumentDataParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDocumentDataParams const&);

    MCNAPI void* $ctor(
        ::SharedTypes::v1_21_90::ActorDefinitions& value,
        ::SemVersion const&                        formatVersion,
        ::MinEngineVersion const&                  minEngineVersion,
        bool                                       isBaseGamePack,
        ::JsonBetaState                            canUseBeta
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
