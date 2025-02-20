#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/world/level/GeneratorType.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Input; }
namespace SharedTypes::v1_21_60::DimensionDefinition { struct DimensionDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DimensionDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 208> mUnk9d3a4b;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionDataLoader& operator=(DimensionDataLoader const&);
    DimensionDataLoader(DimensionDataLoader const&);
    DimensionDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DimensionDataLoader(::cereal::ReflectionCtx const& ctx);

    MCAPI ::Puv::LoadResult<::SharedTypes::v1_21_60::DimensionDefinition::DimensionDocument>
    load(::Puv::Input const& input);

    MCAPI ~DimensionDataLoader();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::GeneratorType> stringToGeneratorType(::std::string const& generatorNameString);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
