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
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SemVersion>                                           mFormatVersion;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>                                     mMinEngineVersion;
    ::ll::TypedStorage<8, 24, ::SemVersion>                                           mOriginalJsonVersion;
    ::ll::TypedStorage<8, 224, ::BlockDescription>                                    mDescription;
    ::ll::TypedStorage<8, 112, ::BlockComponentGroupDescription>                      mBaseComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPermutationDescription>>           mPermutationDescriptions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DefinitionEvent>> mEventHandlers;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::CerealDocumentUpgrader& initCerealDocumentUpgrader(::cereal::ReflectionCtx& ctx);

    MCAPI static void registerBlockDefinitionTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
