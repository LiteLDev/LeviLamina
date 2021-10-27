#pragma once

class BaseAttributeMap;

class AttributeInstanceHandle {
public:
    int               id;
    BaseAttributeMap* source;
};

static_assert(sizeof(AttributeInstanceHandle) == 16);