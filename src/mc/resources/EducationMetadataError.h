#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"

class EducationMetadataError : public ::PackError {
public:
    // prevent constructor by default
    EducationMetadataError& operator=(EducationMetadataError const&);
    EducationMetadataError(EducationMetadataError const&);
    EducationMetadataError();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EducationMetadataError();

    // vIndex: 2
    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const;

    // vIndex: 3
    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const;

    // NOLINTEND
};
