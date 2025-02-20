#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CerealDocumentUpgrader;
class SemVersion;
namespace Core { class Path; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk98f75b;
    ::ll::UntypedStorage<8, 32>  mUnk89992b;
    ::ll::UntypedStorage<8, 24>  mUnk253327;
    ::ll::UntypedStorage<8, 176> mUnkf9a327;
    ::ll::UntypedStorage<8, 112> mUnk3d2b20;
    ::ll::UntypedStorage<8, 24>  mUnk70d426;
    ::ll::UntypedStorage<8, 64>  mUnk5ef251;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDefinition();

    MCAPI BlockDefinition(::BlockDefinition const&);

    MCAPI BlockDefinition(::BlockDefinition&&);

    MCAPI ::BlockDefinition& operator=(::BlockDefinition&&);

    MCAPI ::BlockDefinition& operator=(::BlockDefinition const&);

    MCAPI ~BlockDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::CerealDocumentUpgrader* getCerealDocumentUpgrader(::cereal::ReflectionCtx const& ctx);

    MCAPI static ::CerealDocumentUpgrader& initCerealDocumentUpgrader(::cereal::ReflectionCtx& ctx);

    MCAPI static void registerBlockDefinitionTypes(::cereal::ReflectionCtx& ctx);

    MCAPI static ::std::pair<bool, ::SemVersion> upgradeJson(
        ::cereal::ReflectionCtx const& ctx,
        ::std::string&                 json,
        ::Core::Path const&            resourceName,
        ::std::optional<::SemVersion>  minVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockDefinition const&);

    MCAPI void* $ctor(::BlockDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
