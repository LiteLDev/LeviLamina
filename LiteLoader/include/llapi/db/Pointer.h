#pragma once
#include <memory>

namespace DB
{

class Stmt;


template <typename T>
class SharedPointer : public std::shared_ptr<T>
{

public:

    SharedPointer(T* ptr = nullptr) : std::shared_ptr<T>(ptr) {}
    SharedPointer(const std::shared_ptr<T>& ptr) : std::shared_ptr<T>(ptr) {}
    SharedPointer(std::shared_ptr<T>&& ptr) : std::shared_ptr<T>(ptr) {}
    SharedPointer(const SharedPointer<T>& other) : std::shared_ptr<T>(other) {}
    SharedPointer(SharedPointer<T>&& other) : std::shared_ptr<T>(other) {}
    ~SharedPointer()
    {
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
    inline SharedPointer<Stmt> operator<<(const U& v)
    {
        auto ptr = std::shared_ptr<T>::get();
        if (!ptr) throw std::runtime_error("The pointer is nullptr");
        //Logger("DBG").debug("operator<< {}", (void*)ptr);
        return (*ptr) << v;
    }

    template <typename U>
    inline SharedPointer<Stmt> operator>>(U& v)
    {
        auto ptr = std::shared_ptr<T>::get();
        if (!ptr) throw std::runtime_error("The pointer is nullptr");
        return (*ptr) >> v;
    }

    template <typename U>
    inline SharedPointer<Stmt> operator,(U v)
    {
        auto ptr = std::shared_ptr<T>::get();
        if (!ptr) throw std::runtime_error("The pointer is nullptr");
        return ptr->operator,(v);
    }

};

} // namespace DB