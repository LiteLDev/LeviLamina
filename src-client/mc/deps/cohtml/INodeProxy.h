#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/HTMLTag.h"

namespace cohtml {

class INodeProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* GetId() const = 0;

    virtual uint GetClassesCount() const = 0;

    virtual char const* GetClass(uint) const = 0;

    virtual uint GetAttributesCount() const = 0;

    virtual uint GetAttribute(uint, char*, uint) const = 0;

    virtual uint GetAttribute(char const*, char*, uint) const = 0;

    virtual bool HasAttribute(char const*) const = 0;

    virtual ::cohtml::HTMLTag GetTag() const = 0;

    virtual bool HasScriptEventListeners() const = 0;

    virtual uint GetValueOfElement(char*, uint) const = 0;

    virtual void GetBoundingRect(double&, double&, double&, double&) const = 0;

    virtual ~INodeProxy() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
