#pragma once

class ItemStackNetIdTag;

template <typename Tag, typename StorageType, StorageType default_value>
class SimpleServerNetId {
public:
    StorageType value = default_value;
};