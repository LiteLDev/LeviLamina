#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"

namespace mce {

template <typename T0>
class ServerResourcePointer : public ::mce::ResourcePointer<T0> {};

} // namespace mce
