#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OtherImpulse.h"
#include "mc/entity/components/WindChargeImpulse.h"

struct ImpulseOrigin : public ::std::variant<::OtherImpulse, ::WindChargeImpulse> {};
