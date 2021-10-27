#pragma once

#include <memory>
#include <vector>

#include "../dll.h"
#include "ITextObject.h"

class TextObjectRoot : public ITextObject {
    std::vector<std::unique_ptr<ITextObject>> children;

public:
    inline TextObjectRoot() {
    }
    MCAPI std::string asString() const;
    MCAPI Json::Value asJsonValue() const;

    MCAPI void addChild(std::unique_ptr<ITextObject>);
    template <typename T, typename... TS>
    inline void addChild(TS... ts) {
        addChild(std::make_unique<T>(ts...));
    }
    MCAPI void clear();
    MCAPI bool isEmpty() const;
};