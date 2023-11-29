#include "PackageDTO.h" 
#include "Staff.h" 
#include "DillerOffice.h" 
#include "EndPoint.h" 

struct Home
{
	static inline void show()
	{
		User* userFrom = new User();
		User* userTo = new User("Anonim", "Great Britain, London, st. Beiker apt. 45", "+380967141244");
		User* users = new User[2]{
		 *userFrom,
		 *userTo
		};
		Staff* staff = new Staff(2, users);
		DillerOffice* DillerOffice_1 = new DillerOffice(1, "Ukraine, Kiew, anonim", staff);
		DillerOffice* DillerOffice_2 = new DillerOffice(2, ", Ukraine, st. gogol' 22, anonim", staff);

		EndPoint* endPointFrom = new EndPoint("Ukraine, Kiew, anonim", "24.11.2023", "-");
		EndPoint* endPointTo = new EndPoint("Ukraine,Kiew, st. gogol' 22", "29.11.2023", "21:00");

		Package<string>* package = new Package<string>("MESSAGE DATA", "London, Taffalgar app.488", 2, 22);

		PackageDTO<string>* packageDTO = new PackageDTO<string>(userFrom, userTo, package, endPointFrom, endPointTo);

		PackageDTO<string>* packageDTORecive = new PackageDTO<string>();
		packageDTORecive->receive(nullptr);
		cout << "Data: " << packageDTORecive->getPackage()->getData() << endl;

	}
};