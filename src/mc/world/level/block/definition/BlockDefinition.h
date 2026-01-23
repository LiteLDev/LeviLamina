#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/world/level/block/definition/BlockComponentGroupDescription.h"
#include "mc/world/level/block/definition/BlockDescription.h"

// auto generated forward declare list
// clang-format off
class CerealDocumentUpgrader;
class DefinitionEvent;
struct BlockPermutationDescription;
namespace Core { class Path; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SemVersion>                                           mFormatVersion;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>                                     mMinEngineVersion;
    ::ll::TypedStorage<8, 24, ::SemVersion>                                           mOriginalJsonVersion;
    ::ll::TypedStorage<8, 176, ::BlockDescription>                                    mDescription;
    ::ll::TypedStorage<8, 112, ::BlockComponentGroupDescription>                      mBaseComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPermutationDescription>>           mPermutationDescriptions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DefinitionEvent>> mEventHandlers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDefinition();

    MCAPI BlockDefinition(::BlockDefinition&&);

    MCAPI BlockDefinition(::BlockDefinition const&);

    MCAPI ::BlockDefinition& operator=(::BlockDefinition&&);

    MCAPI ::BlockDefinition& operator=(::BlockDefinition const&);

    MCAPI ~BlockDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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

    MCAPI void* $ctor(::BlockDefinition&&);

    MCAPI void* $ctor(::BlockDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
