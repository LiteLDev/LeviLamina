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
    MCNAPI BlockDefinition();

    MCNAPI BlockDefinition(::BlockDefinition&&);

    MCNAPI BlockDefinition(::BlockDefinition const&);

    MCNAPI ::BlockDefinition& operator=(::BlockDefinition&&);

    MCNAPI ::BlockDefinition& operator=(::BlockDefinition const&);

    MCNAPI ~BlockDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::CerealDocumentUpgrader* getCerealDocumentUpgrader(::cereal::ReflectionCtx const& ctx);

    MCNAPI static ::CerealDocumentUpgrader& initCerealDocumentUpgrader(::cereal::ReflectionCtx& ctx);

    MCNAPI static void registerBlockDefinitionTypes(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::std::pair<bool, ::SemVersion> upgradeJson(
        ::cereal::ReflectionCtx const& ctx,
        ::std::string&                 json,
        ::Core::Path const&            resourceName,
        ::std::optional<::SemVersion>  minVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::BlockDefinition&&);

    MCNAPI void* $ctor(::BlockDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
