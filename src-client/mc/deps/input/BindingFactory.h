#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
// clang-format on

class BindingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BindingFactory();

    virtual ::std::function<bool()> getBooleanBinding(uint) const = 0;

    virtual ::std::function<float()> getFloatBinding(uint) const = 0;

    virtual ::std::function<::std::string()> getStringBinding(uint) const = 0;

    virtual ::std::function<::glm::vec2()> getPointBinding(uint) const = 0;

    virtual ::std::function<::RectangleArea()> getAreaBinding(uint) const = 0;

    virtual ::std::function<void(::RectangleArea)> getDynamicAreaBinding(uint) const = 0;

    virtual ::std::function<void(float)> getFloatSetter(uint) const = 0;

    virtual void setCustomAreaBinding(::std::string const&, ::RectangleArea) = 0;

    virtual void removeCustomAreaBinding(::std::string const&) = 0;

    virtual ::std::vector<uint> getCustomAreaBindingNames() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
