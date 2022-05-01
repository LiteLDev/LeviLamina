#pragma once
#include "../Global.h"
#include "../LoggerAPI.h"
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
    ~SharedPointer()
    {
        //Logger("DBG").debug("~SharedPointer<{}>({})", 
        //    typeid(decltype(*this)).name(),
        //    std::shared_ptr<T>::use_count());
    }
    inline SharedPointer<T>& operator=(const SharedPointer<T>& other)
    {
        std::shared_ptr<T>::operator=(other);
        return *this;
    }
    inline SharedPointer<T>& operator=(SharedPointer<T>&& other) noexcept
    {
        std::shared_ptr<T>::operator=(other);
        return *this;
    }

    template <typename U>
    inline T& operator<<(const U& v)
    {
        auto ptr = std::shared_ptr<T>::get();
        if (!ptr) throw std::runtime_error("The pointer is nullptr");
        //Logger("DBG").debug("operator<< {}", (void*)ptr);
        (*ptr) << v;
        return *ptr;
    }

    template <typename U>
    inline T& operator>>(U& v)
    {
        auto ptr = std::shared_ptr<T>::get();
        if (!ptr) throw std::runtime_error("The pointer is nullptr");
        (*ptr) >> v;
        return *ptr;
    }

    template <typename U>
    inline T& operator,(const U& v)
    {
        auto ptr = std::shared_ptr<T>::get();
        if (!ptr) throw std::runtime_error("The pointer is nullptr");
        ptr->operator,(v);
        return *ptr;
    }

};

} // namespace DB