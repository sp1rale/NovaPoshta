#ifndef package_h
#define package_h

template<typename T>
struct Package
{
private:
	T data;
public:
	float height;
	float width;
	float length;
	float weight;
	float cost;

	Package(T data, float height, float width, float length, float weight, float cost)
	{
		this->data = data;
		this->height = height;
		this->width = width;
		this->length = length;
		this->weight = weight;
		this->cost = cost;
	}
	Package(T data)
	{
		this->data = data;
	}

	inline T getData() const
	{
		return data;
	}
};

#endif // !package_h

