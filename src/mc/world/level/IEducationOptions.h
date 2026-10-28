#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/EducationEditionOffer.h"

class IEducationOptions {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEducationOptions() = default;

    virtual bool educationFeaturesEnabled() const = 0;

    virtual void setEducationFeaturesEnabled(bool educationEnabled) = 0;

    virtual bool isChemistryEnabled() const;

    virtual bool isCodeBuilderEnabled() const = 0;

    virtual void setCodeBuilderEnabled(bool codeBuilderEnabled) = 0;

    virtual bool isBaseCodeBuilderEnabled() const;

    virtual ::EducationEditionOffer getEducationEditionOffer() const = 0;

    virtual void setEducationEditionOffer(::EducationEditionOffer eduOffer) = 0;

    virtual bool isEducationEditionLevel() const;

    virtual bool isEditionCompatible(::EducationEditionOffer eduOffer) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isChemistryEnabled() const;

    MCNAPI bool $isBaseCodeBuilderEnabled() const;

    MCNAPI bool $isEducationEditionLevel() const;

    MCNAPI bool $isEditionCompatible(::EducationEditionOffer eduOffer) const;


    // NOLINTEND
};
