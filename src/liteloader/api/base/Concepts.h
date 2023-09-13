#pragma once

#include <type_traits>

namespace ll::concepts {

template <typename T, typename... Ts>
concept IsOneOf = (std::is_same_v<T, Ts> || ...);

} // namespace ll::concepts
