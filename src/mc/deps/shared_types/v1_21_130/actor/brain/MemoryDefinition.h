#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::Brain {

struct MemoryDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                    mName;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_130::Brain::MemoryType::Value> mType;
    ::ll::TypedStorage<1, 1, bool>                                               mPersists;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryDefinition& operator=(MemoryDefinition const&);
    MemoryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MemoryDefinition(::SharedTypes::v1_21_130::Brain::MemoryDefinition const&);

    MCAPI ~MemoryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& MEMORY_NAME();

    MCAPI static ::std::string_view const& MEMORY_PERSISTENCE();

    MCAPI static ::std::string_view const& MEMORY_TYPE();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_130::Brain::MemoryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::Brain
