#include<iostream>
using namespace std;

int main() {
	int age {30}, salary {7000}, weight {110};

	bool result = (age > 25) && (salary < 8000);
	cout<<result<<"\n";

	cout<<(  (age > 25) && (salary > 9000) )<<"\n";

	cout<<(  (age > 35) || (salary < 8500) )<<"\n";
	cout<<(  (age > 35) || (salary > 9000) )<<"\n";


	cout<<(  (age > 25) && (salary < 8000) && (weight < 150) )<<"\n";
	cout<<(  (age > 25) && (salary < 8000) && (weight > 200) )<<"\n";

	cout<<(  (age > 35) || (salary > 6000) || (weight > 200) )<<"\n";

	cout<<(  (age > 35) && (salary > 6000) || (weight > 200) )<<"\n";
	cout<<(  (age > 20) && (salary > 6000) || (weight > 200) )<<"\n";


    // ANDs are evaluated
	cout << ( age > 35 || salary > 6000  && weight > 200) << "\n";

	// () are evaluated FIRST even before some ANDS
	cout << ((age > 35 || salary > 6000) && weight > 200) << "\n";


    int x { 10 };

	// (x+= 50 > 10) is discarded
	x < 100 || (x+= 50 > 10);

	// (++x > 10) is discarded
	x == 20 && (++x > 50);

	// (++x > 10) is discarded, but (x > 0) eval
	(x == 20) && (++x > 50) || (x > 0);

	// X still 10
	// All evaluated
	(x == 10) && ((++x > 50) || (x > 0));

	// X now 11
	
	return 0;
}
/*Short-Circuit Evaluation:
The rule is simple: if some sub-expression doesn't affect the final result, it might be discarded.
Assume expression is A and (B or C)
Assume A is False
As it is A and exp2, we are sure the final result is False. Discard (B or C) sub-expression
Assume A is True
Now, the result depends on (B or C)
Assume B is True
True or whatever = True. No need to evaluate C. Discard C
Assume B is False.
Now we have to evalaute C
So use your logic: is it possible to discard this sub-expression or not?
In practice, we use short circuit evaluation in our codes, but only with simple and clear expressions.*/

