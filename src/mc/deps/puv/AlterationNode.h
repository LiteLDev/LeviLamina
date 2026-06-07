#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
namespace Puv::internal { struct PathElement; }
// clang-format on

namespace Puv::internal {

struct AlterationNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnkfe287f;
    ::ll::UntypedStorage<8, 160> mUnk629784;
    // NOLINTEND

public:
    // prevent constructor by default
    AlterationNode& operator=(AlterationNode const&);
    AlterationNode(AlterationNode const&);
    AlterationNode();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void fill(
        ::Puv::internal::AlterationNode&                                                       node,
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>> it,
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>> end,
        ::std::variant<
            ::std::monostate,
            ::std::pair<
                ::std::function<void(::entt::meta_any&, ::entt::meta_any&)>,
                ::Bedrock::small_vector<::Puv::internal::PathElement, 1>>> alt
    );
    // NOLINTEND
};

} // namespace Puv::internal
