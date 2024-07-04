#include <memory>

template <typename T>
class IBuilder
{
public:
    // Acts as constructor
    virtual std::shared_ptr<T> build() = 0;
    virtual ~IBuilder(){};
};