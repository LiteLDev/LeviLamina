#pragma once
#include "../Global.h"
#include <memory>

namespace DB
{

/**
 * @brief A smart pointer class extended from std::shared_ptr
 * 
 * @tparam  T  Type of the pointer
 * @warning This class is only for internal use(Session, Stmt and so on).
 *           So do not use this class directly, use std::shared_ptr instead.
 */
template <typename T>
class SharedPointer : public std::shared_ptr<T>
{

public:

    SharedPointer(T* ptr = nullptr) : std::shared_ptr<T>(ptr) {}
    SharedPointer(const SharedPointer<T>& other) : std::shared_ptr<T>(other) {}
    SharedPointer(SharedPointer<T>&& other) : std::shared_ptr<T>(other) {}

    template <typename U>
    inline T& operator<<(const U& v)
    {
        *std::shared_ptr<T>::get() << v;
        return *std::shared_ptr<T>::get();
    }

    template <typename U>
    inline T& operator>>(U& v)
    {
        *std::shared_ptr<T>::get() >> v;
        return *std::shared_ptr<T>::get();
    }

    template <typename U>
    inline T& operator,(const U& v)
    {
        std::shared_ptr<T>::get()->operator,(v);
        return *std::shared_ptr<T>::get();
    }

};

} // namespace DB