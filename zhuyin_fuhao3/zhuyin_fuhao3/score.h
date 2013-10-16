#ifndef SCORE_H
#define SCORE_H



class score
{
public:
	score(): maximum(0), points(0){};
	void addscore(int add);
	double getscore();
	double getpercentage();
	void addtotal();
	double getincorrect();

private:
	double maximum;
	double points;
};

void score::addscore(int add)
{
	points+=add;
}

double score::getscore()
{
	return points;
}

void score::addtotal()
{
	maximum++;

}
double score::getpercentage()
{
	return points/maximum*100;
}

double score::getincorrect()
{

	return maximum-points;

}

#endif