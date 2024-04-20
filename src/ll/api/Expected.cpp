#include "ll/api/Expected.h"
#include "ll/api/utils/StringUtils.h"

#include "mc/server/commands/CommandOutput.h"

namespace ll {
struct ErrorList : ErrorInfoBase {
    std::vector<std::shared_ptr<ErrorInfoBase>> errors;
    ErrorList() {}
    std::string message() const override {
        std::string result;

        for (size_t i = 0; i < errors.size(); i++) {
            result += errors[i]->message();
            if (i + 1 < errors.size()) {
                result += '\n';
            }
        }
        return result;
    }
};

Error& Error::join(Error err) {
    if (!*this) {
        mInfo = std::move(err.mInfo);
        return *this;
    }
    if (!err) {
        return *this;
    }
    if (isA<ErrorList>()) {
        if (err.isA<ErrorList>()) {
            as<ErrorList>()->errors.append_range(std::move(err.as<ErrorList>()->errors));
        } else {
            as<ErrorList>()->errors.emplace_back(std::move(err.mInfo));
        }
    } else {
        if (err.isA<ErrorList>()) {
            auto ptr = err.as<ErrorList>();
            ptr->errors.insert(ptr->errors.begin(), std::move(mInfo));
            mInfo = std::move(err.mInfo);
        } else {
            auto list = std::make_shared<ErrorList>();
            list->errors.emplace_back(std::move(mInfo));
            list->errors.emplace_back(std::move(err.mInfo));
            mInfo = std::move(list);
        }
    }
    return *this;
}
LLAPI Error& Error::log(::ll::Logger::OutputStream& stream) {
    auto msg = message();
    for (auto& sv : string_utils::splitByPattern(msg, "\n")) {
        if (sv.ends_with('\r')) {
            sv.remove_suffix(1);
        }
        if (sv.starts_with('\r')) {
            sv.remove_prefix(1);
        }
        stream(sv);
    }
    return *this;
}
LLAPI Error& Error::log(CommandOutput& stream) {
    auto msg = message();
    for (auto& sv : string_utils::splitByPattern(msg, "\n")) {
        if (sv.ends_with('\r')) {
            sv.remove_suffix(1);
        }
        if (sv.starts_with('\r')) {
            sv.remove_prefix(1);
        }
        stream.error(sv);
    }
    return *this;
}
} // namespace ll
