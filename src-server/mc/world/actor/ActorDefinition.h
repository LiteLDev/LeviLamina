#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/world/actor/ActorDefinitionParseStatus.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class ActorEventResponseFactory;
class ActorFactory;
class MinEngineVersion;
class SemVersion;
struct ActorDocumentDataParams;
namespace cereal { class DynamicValue; }
// clang-format on

class ActorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 968> mUnk6bda03;
    ::ll::UntypedStorage<8, 40>  mUnkf17916;
    ::ll::UntypedStorage<8, 40>  mUnk2d34b6;
    ::ll::UntypedStorage<1, 16>  mUnk9b540f;
    ::ll::UntypedStorage<1, 16>  mUnk8530f2;
    ::ll::UntypedStorage<8, 72>  mUnk3f0bae;
    ::ll::UntypedStorage<8, 32>  mUnk458bad;
    ::ll::UntypedStorage<8, 24>  mUnkd3ce24;
    ::ll::UntypedStorage<8, 32>  mUnkf5b708;
    ::ll::UntypedStorage<4, 16>  mUnk354e24;
    ::ll::UntypedStorage<8, 24>  mUnkaaad6c;
    ::ll::UntypedStorage<8, 64>  mUnkdf86c2;
    ::ll::UntypedStorage<8, 16>  mUnk918084;
    ::ll::UntypedStorage<8, 32>  mUnk4054c9;
    ::ll::UntypedStorage<4, 4>   mUnk61500a;
    ::ll::UntypedStorage<8, 72>  mUnk8e6ffa;
    ::ll::UntypedStorage<8, 56>  mUnk4b6801;
    ::ll::UntypedStorage<8, 56>  mUnk729fdb;
    ::ll::UntypedStorage<4, 16>  mUnkc7a35f;
    ::ll::UntypedStorage<8, 40>  mUnk88800c;
    ::ll::UntypedStorage<8, 72>  mUnk44bdc5;
    ::ll::UntypedStorage<4, 16>  mUnk78cbde;
    ::ll::UntypedStorage<1, 8>   mUnka41fad;
    ::ll::UntypedStorage<4, 24>  mUnkbdc608;
    ::ll::UntypedStorage<4, 24>  mUnke0c99f;
    ::ll::UntypedStorage<8, 128> mUnk97487a;
    ::ll::UntypedStorage<4, 16>  mUnkbd744c;
    ::ll::UntypedStorage<4, 24>  mUnk360194;
    ::ll::UntypedStorage<1, 8>   mUnkd54306;
    ::ll::UntypedStorage<8, 40>  mUnkd8b5e3;
    ::ll::UntypedStorage<1, 8>   mUnk26e3e6;
    ::ll::UntypedStorage<4, 16>  mUnk6002e8;
    ::ll::UntypedStorage<4, 16>  mUnk27ff04;
    ::ll::UntypedStorage<4, 16>  mUnkf7ec50;
    ::ll::UntypedStorage<4, 16>  mUnk9f658a;
    ::ll::UntypedStorage<4, 16>  mUnka6b0c5;
    ::ll::UntypedStorage<4, 24>  mUnkef3503;
    ::ll::UntypedStorage<8, 88>  mUnka4add4;
    ::ll::UntypedStorage<8, 88>  mUnk7d6dca;
    ::ll::UntypedStorage<8, 88>  mUnkc10249;
    ::ll::UntypedStorage<8, 88>  mUnk833e28;
    ::ll::UntypedStorage<8, 88>  mUnk688e27;
    ::ll::UntypedStorage<8, 120> mUnk9dcb37;
    ::ll::UntypedStorage<8, 88>  mUnkb5ccfb;
    ::ll::UntypedStorage<1, 8>   mUnk3bacaa;
    ::ll::UntypedStorage<8, 48>  mUnk7aa225;
    ::ll::UntypedStorage<8, 360> mUnk771d5a;
    ::ll::UntypedStorage<1, 16>  mUnk57781e;
    ::ll::UntypedStorage<4, 24>  mUnk93d38f;
    ::ll::UntypedStorage<4, 24>  mUnk15a8c2;
    ::ll::UntypedStorage<8, 136> mUnkad3901;
    ::ll::UntypedStorage<4, 48>  mUnkca87dd;
    ::ll::UntypedStorage<4, 12>  mUnk9dd6d5;
    ::ll::UntypedStorage<1, 8>   mUnk8c3d25;
    ::ll::UntypedStorage<1, 8>   mUnkd0a93b;
    ::ll::UntypedStorage<8, 112> mUnkb07767;
    ::ll::UntypedStorage<8, 320> mUnk8fdf38;
    ::ll::UntypedStorage<4, 16>  mUnk39fb9e;
    ::ll::UntypedStorage<4, 16>  mUnkeb97db;
    ::ll::UntypedStorage<1, 8>   mUnke23d01;
    ::ll::UntypedStorage<1, 8>   mUnk80e01d;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinition& operator=(ActorDefinition const&);
    ActorDefinition(ActorDefinition const&);
    ActorDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ActorDefinition(::std::string const& id);

    MCNAPI ::ActorDefinitionParseStatus parse(
        ::ActorDocumentDataParams    deserializeDataParams,
        ::ActorDefinitionDescriptor& desc,
        ::ActorFactory&              actorFactory,
        ::LogArea                    logArea
    );

    MCNAPI void parseAttributes(::ActorDocumentDataParams deserializeDataParams, ::ActorDefinitionDescriptor& desc);

    MCNAPI void parseEntityDescription(
        ::cereal::DynamicValue const& description,
        ::SemVersion const&           formatVersion,
        ::MinEngineVersion const&     minEngineVersion
    );

    MCNAPI void parseEvents(
        ::cereal::DynamicValue const& root,
        ::MinEngineVersion const&     minEngineVersion,
        ::SemVersion const&           formatVersion,
        ::ActorEventResponseFactory*  responseFactory,
        ::JsonBetaState               useBetaFeatures
    );

    MCNAPI ~ActorDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
