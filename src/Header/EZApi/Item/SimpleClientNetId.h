#pragma once

class ItemStackLegacyRequestIdTag;
class ItemStackRequestIdTag;

template <typename Tag, typename StorageType, StorageType default_value>
class SimpleClientNetId {
public:
    StorageType value = default_value;
};