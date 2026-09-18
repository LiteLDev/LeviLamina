#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_40/actor/Description.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_40::Poi {

struct TypeDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_26_40::Poi::Description> mDescription;
    ::ll::TypedStorage<1, 1, uchar>                                      mTickets;
    ::ll::TypedStorage<1, 1, uchar>                                      mUsableDistance;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>              mBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>              mTags;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeDocument& operator=(TypeDocument const&);
    TypeDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TypeDocument(::SharedTypes::v1_26_40::Poi::TypeDocument const&);

    MCAPI ::SharedTypes::v1_26_40::Poi::TypeDocument& operator=(::SharedTypes::v1_26_40::Poi::TypeDocument&&);

    MCAPI bool operator==(::SharedTypes::v1_26_40::Poi::TypeDocument const& rhs) const;

    MCAPI ~TypeDocument();
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
    MCAPI void* $ctor(::SharedTypes::v1_26_40::Poi::TypeDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40::Poi
