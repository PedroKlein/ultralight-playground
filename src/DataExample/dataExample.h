#pragma once

template <typename T>
class DataExample
{
private:
    T data;
    size_t id;

public:
    DataExample(T data, size_t id)
    {
        this->data = data;
        this->id = id;
    }

    ~DataExample()
    {
    }

    T getData()
    {
        return data;
    }

    size_t getId()
    {
        return id;
    }
    // DataExample(T data, size_t id);
    // ~DataExample();

    // T getData();
    // size_t getId();
};
