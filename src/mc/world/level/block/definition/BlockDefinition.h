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
    ::ll::TypedStorage<8, 240, ::BlockDescription>                                    mDescription;
    ::ll::TypedStorage<8, 112, ::BlockComponentGroupDescription>                      mBaseComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPermutationDescription>>           mPermutationDescriptions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DefinitionEvent>> mEventHandlers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockDefinition();

#ifdef LL_PLAT_C
    MCNAPI BlockDefinition(::BlockDefinition&&);
#endif

    MCNAPI BlockDefinition(::BlockDefinition const&);

    MCNAPI ::BlockDefinition& operator=(::BlockDefinition&&);

    MCNAPI ::BlockDefinition& operator=(::BlockDefinition const&);

    MCAPI ~BlockDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::CerealDocumentUpgrader& initCerealDocumentUpgrader(::cereal::ReflectionCtx& ctx);

    MCNAPI static void registerBlockDefinitionTypes(::cereal::ReflectionCtx& ctx);

#ifdef LL_PLAT_S
    MCNAPI static ::std::pair<bool, ::SemVersion> upgradeJson(
        ::cereal::ReflectionCtx const& ctx,
        ::std::string&                 json,
        ::Core::Path const&            resourceName,
        bool                           betaApis,
        ::std::optional<::SemVersion>  minVersion
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::BlockDefinition&&);
#endif

    MCNAPI void* $ctor(::BlockDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
