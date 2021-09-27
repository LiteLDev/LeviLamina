#pragma once
#include <variant>

#include "SimpleClientNetId.h"
#include "SimpleServerNetId.h"

class ItemStackNetIdVariant
    : public std::variant<
          SimpleServerNetId<ItemStackNetIdTag, int, 0>, SimpleClientNetId<ItemStackRequestIdTag, int, 0>,
          SimpleClientNetId<ItemStackLegacyRequestIdTag, int, 0>> {
public:
    using variant::variant;
};