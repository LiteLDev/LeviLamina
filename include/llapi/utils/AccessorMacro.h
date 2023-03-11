#pragma once

#define LL_RO_MEMBER(type, name, getter)                                                                               \
private:                                                                                                               \
    type name;                                                                                                         \
                                                                                                                       \
public:                                                                                                                \
    LLAPI type getter() const

#define LL_RW_MEMBER(type, name, getter, setter)                                                                       \
    LL_RO_MEMBER(type, name, getter);                                                                                  \
    LLAPI void setter(type _val)

#define LL_GETTER_IMPL(clazz, type, name, getter)                                                                      \
    type clazz::getter() const {                                                                                       \
        return name;                                                                                                   \
    }

#define LL_SETTER_IMPL(clazz, type, name, setter)                                                                      \
    void clazz::setter(type _val) {                                                                                    \
        this->name = std::move(_val);                                                                                             \
    }

#define LL_DELETE_COPY(clazz)                                                                                          \
    clazz(const clazz&) = delete;                                                                                      \
    clazz& operator=(const clazz&) = delete;

#define LL_DELETE_MOVE(clazz)                                                                                          \
    clazz(clazz&&) = delete;                                                                                           \
    clazz& operator=(clazz&&) = delete;
