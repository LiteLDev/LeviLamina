#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_40/actor/TagDescription.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_40::Poi {

struct TagDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_26_40::Poi::TagDescription> mDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                 mParents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                 mChildren;
    // NOLINTEND

public:
    // prevent constructor by default
    TagDocument& operator=(TagDocument const&);
    TagDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TagDocument(::SharedTypes::v1_26_40::Poi::TagDocument const&);

    MCAPI bool operator==(::SharedTypes::v1_26_40::Poi::TagDocument const& rhs) const;

    MCAPI ~TagDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_40::Poi::TagDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40::Poi
