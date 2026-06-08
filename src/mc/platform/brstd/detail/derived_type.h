#pragma once

namespace brstd::detail::function {

enum class DerivedType : int {
    MoveOnly = 0,
    Copyable = 1,
    Function = 2,
};

}
