#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorIndex : public ::type_safe::strong_typedef<::ActorIndex, uint>,
                    public ::type_safe::strong_typedef_op::equality_comparison<::ActorIndex>,
                    public ::type_safe::strong_typedef_op::relational_comparison<::ActorIndex> {};
