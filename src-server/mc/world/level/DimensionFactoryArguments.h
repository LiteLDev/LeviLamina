#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/OwnerPtrFactory.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class ILevel;
class Scheduler;
struct DerivedDimensionArguments;
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

struct DimensionFactoryArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<::OwnerPtr<
            ::Dimension>(::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&> const&, ::std::string const&)
                                        const>>
                                                                                     mCreate;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::Dimension&) const>> mInit;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DimensionFactoryArguments();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::DimensionFactoryArguments create(
        ::Bedrock::NotNullNonOwnerPtr<::ILevel>     level,
        ::Bedrock::NotNullNonOwnerPtr<::Scheduler>  scheduler,
        ::br::worldgen::StructureSetRegistry const& structureSetRegistry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
