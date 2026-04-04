#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LevelSummary;
struct WorldTemplateInfo;
namespace World { struct WorldID; }
// clang-format on

namespace World {

class IWorldTemplateHandler {
public:
    // IWorldTemplateHandler inner types define
    enum class Result : int {
        Success         = 0,
        MissingTemplate = 1,
        LoadingError    = 2,
    };

    enum class WriteTemplateError : uchar {
        IncorrectWorldId      = 0,
        InsufficientDiskSpace = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldTemplateHandler() = default;

    virtual void loadTemplate(
        ::std::string const&                                                                            templateId,
        ::std::function<void(::std::variant<::World::WorldID, ::World::IWorldTemplateHandler::Result>)> onComplete
    ) = 0;

    virtual ::std::optional<::World::IWorldTemplateHandler::WriteTemplateError>
    saveTemplate(::LevelSummary const& levelSummary) const = 0;

    virtual bool isTemplateExportEnabled() const = 0;

    virtual ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& getLocalTemplates() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
