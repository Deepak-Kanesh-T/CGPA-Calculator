#include<iostream>
#include <bits/stdc++.h>
using namespace std;
map<string, int> Grade={
    {"O",10},
    {"A+",9},
    {"A",8},
    {"B+",7},
    {"B",6},
    {"C",5},
    {"U",0}
};
float creditfinal=0;
float grademarksfinal=0;

tuple<float,float,float,float> calci(map<string,int>& credits, map<string,string>& grade)
{
    float totalcreditsearned=0;
    float totalcredit=0;
    float totalgrademarks=0;
    float gradeearned=0;
    for(auto& i: credits)
    {
        totalcredit+=i.second;
        if (Grade[grade[i.first]]>0){
            totalcreditsearned+=i.second;
            gradeearned+=Grade[grade[i.first]];
            totalgrademarks+=((i.second)*Grade[grade[i.first]]);
        }
    }
    return make_tuple(totalcreditsearned,totalcredit,totalgrademarks,gradeearned);
}

float cgpa(float totalcreditsearned,float totalgrademarks)
{
    grademarksfinal=grademarksfinal+totalgrademarks;
    creditfinal+=totalcreditsearned;
    
    return grademarksfinal/creditfinal;
}

void display(float totalcreditsearned,float totalcredit,float totalgrademarks,float gradeearned)
{
    static int sem_no=1;
    cout<<"\n   Total Credit:  "<< totalcredit;
    cout<<"\n   Credit Earned:  "<< totalcreditsearned;
    cout<<"\n   Grade Points Earned:  "<<gradeearned;
    cout<<"\n   GPA:   "<< std::fixed << std::setprecision(2) << (totalgrademarks/totalcreditsearned);
    cout<<"\n ********** Current CGPA :  "<< std::fixed << std::setprecision(2) << cgpa(totalcreditsearned,totalgrademarks);
    cout<<"\n\n ______________________ RESULTS OF Semester- "<<sem_no<<" _____________________\n\n";
    sem_no+=1;

}

tuple<float,float,float,float> sem1()
{
    string dpsdlab, cp,tamil1, ctpslab, english1, ee1, fetlab, maths1, ctps, dpsd, eco, fet;
    cout<<"\nEnter Grade for \" DIGITAL PRINCIPLES AND SYSTEM DESIGN LABORATORY \": ";
    cin>> dpsdlab;
    cout<<"\nEnter Grade for \" CROP PRODUCTION-1 LABORATORY \": ";
    cin>>cp;
    cout<<"\nEnter Grade for \" LANGUAGE-TAMIL \": ";
    cin>>tamil1;
    cout<<"\nEnter Grade for \" COMPUTATIONAL THINKING AND PROBLEM SOLVING USING C LABORATORY \": ";
    cin>>ctpslab;
    cout<<"\nEnter Grade for \" COMMUNICATIVE ENGLISH \": ";
    cin>>english1;
    cout<<"\nEnter Grade for \" ENGINEERING EXPLORATION-I \": ";
    cin>>ee1;
    cout<<"\nEnter Grade for \" FRONT END TECHNOLOGIES LABORATORY \": ";
    cin>>fetlab;
    cout<<"\nEnter Grade for \" MATRICES AND CALCULUS FOR INFORMATION SCIENCE \": ";
    cin>>maths1;
    cout<<"\nEnter Grade for \" COMPUTATIONAL THINKING AND PROBLEM SOLVING USING C \": ";
    cin>>ctps;
    cout<<"\nEnter Grade for \" DIGITAL PRINCIPLES AND SYSTEM DESIGN \": ";
    cin>>dpsd;
    cout<<"\nEnter Grade for \" ENGINEERING ECONOMICS \": ";
    cin>>eco;
    cout<<"\nEnter Grade for \" FRONT END TECHNOLOGIES \": ";
    cin>>fet;
    
    
    map<string,int> credits ={ {"dpsdlab",1},{"cp",2},{"tamil1",2}, {"ctpslab",1}, {"english1",3},{
                            "ee1",2}, {"fetlab",1},{"maths1",4},{"ctps",3}, {"dpsd",3}, {"eco",2}, {"fet",3} };
    map<string,string> grade={ {"dpsdlab",dpsdlab}, {"cp",cp},{"tamil1",tamil1}, {"ctpslab",ctpslab}, {"english1",english1},{"ee1",ee1}, 
                                {"fetlab",fetlab}, {"maths1",maths1}, {"ctps",ctps},{"dpsd",dpsd},{"eco",eco},{"fet",fet} };            
    return calci(credits,grade);
}

tuple<float,float,float,float> sem2()
{
    string pds,co,oops,pdslab,maths2,ee2,english2,engine,oopslab,psyco,tamil2;
    cout<<"\nEnter Grade for \" PROGRAMMING IN C AND DATA STRUCTURES \": ";
    cin>>pds;
    cout<<"\nEnter Grade for \" COMPUTER ORGANIZATION \": ";
    cin>>co;
    cout<<"\nEnter Grade for \" OBJECT ORIENTED PROGRAMMING USING PYTHON \": ";
    cin>>oops;
    cout<<"\nEnter Grade for \" PROGRAMMING IN C AND DATA STRUCTURES LABORATORY \": ";
    cin>>pdslab;
    cout<<"\nEnter Grade for \" ADVANCED CALCULUS AND SET ALGEBRA \": ";
    cin>>maths2;
    cout<<"\nEnter Grade for \" ENGINEEIN EXPLORATION-II \": ";
    cin>>ee2;
    cout<<"\nEnter Grade for \" APPLIED ENGLISH SKILLS \": ";
    cin>>english2;
    cout<<"\nEnter Grade for \" AUTOMOBILE ENGINE ASSEMBLY LABORATORY \": ";
    cin>>engine;
    cout<<"\nEnter Grade for \" OBJECT ORIENTED PROGRAMMING USING PYTHON LABORATORY \": ";
    cin>>oopslab;
    cout<<"\nEnter Grade for \" PSYCOLOGY FOR ENGINEERS \": ";
    cin>>psyco;
    cout<<"\nEnter Grade for \" HERITAGE OF TAMILS \": ";
    cin>>tamil2;
    
    map<string,int> credits ={ {"pds",3},{"co",3},{"oops",3},{"pdslab",1},{"maths2",3},{"ee2",2},{"english2",3},{"engine",1},
                            {"oopslab",1},{"psyco",2},{"tamil2",1} };
    map<string,string> grade ={ {"pds",pds},{"co",co},{"oops",oops},{"pdslab",pdslab},{"maths2",maths2},{"ee2",ee2},{"english2",english2},{"engine",engine},
                                {"oopslab",oopslab},{"psyco",psyco},{"tamil2",tamil2} };
    return calci(credits,grade);
}


tuple<float,float,float,float> sem3()
{
    string oslab,cep1,ee3,ads,aimllab,adslab,iml,maths3,os,dbms,aip,tamil3;
    cout<<"\nEnter Grade for \" OPERATING SYSTEMS LABORATORY \": ";
    cin>>oslab;
    cout<<"\nEnter Grade for \" CAREER ENCHANCEMENT PROGRAM-I \": ";
    cin>>cep1;
    cout<<"\nEnter Grade for \" ENGINEERING EXPLORATION-III \": ";
    cin>>ee3;
    cout<<"\nEnter Grade for \" ADVANCE DATA STRUCTURES AND ALGORITHMS \": ";
    cin>>ads;
    cout<<"\nEnter Grade for \" ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING LABORATORY \": ";
    cin>>aimllab;
    cout<<"\nEnter Grade for \" ADVANCE DATA STRUCTURES AND ALGORITHMS LABORATORY \": ";
    cin>>adslab;
    cout<<"\nEnter Grade for \" INTRODUCTION TO MACHINE LEARNING \": ";
    cin>>iml;
    cout<<"\nEnter Grade for \" DISCRETE MATHEMATICS \": ";
    cin>>maths3;
    cout<<"\nEnter Grade for \" OPERATING SYSTEMS\": ";
    cin>>os;
    cout<<"\nEnter Grade for \" DATABASE MANAGEMENT SYSTEMS \": ";
    cin>>dbms;
    cout<<"\nEnter Grade for \" ARTIFICIAL INTELLIGENCE:PRINCIPLES AND TECHNIQUES \": " ;
    cin>>aip;
    cout<<"\nEnter Grade for \" TAMILS AND TECHMOLOGY \": ";
    cin>>tamil3;
    
    map<string,int> credits={ {"oslab",1},{"cep1",1},{"ee3",1},{"ads",3},{"aimllab",1},{"adslab",2},
                            {"iml",3},{"maths3",4},{"os",3},{"dbms",4},{"aip",3},{"tamil3",1} };
    map<string,string> grade={ {"oslab",oslab},{"cep1",cep1},{"ee3",ee3},{"ads",ads},{"aimllab",aimllab},{"adslab",adslab},
                            {"iml",iml},{"maths3",maths3},{"os",os},{"dbms",dbms},{"aip",aip},{"tamil3",tamil3} };
    return calci(credits,grade);

}

tuple<float,float,float,float> sem4()
{
   string  ee4, daalab, gbm, dl,cep2, toc, java, maths4, bi, daa ;
    cout<<"\nEnter Grade for \" ENGINEERING EXPLORATION-IV \": ";
    cin>>ee4;
    cout<<"\nEnter Grade for \" DESIGN AND ANALYSIS OF ALGORITHMS LABORATORY \": ";
    cin>>daalab;
    cout<<"\nEnter Grade for \" GENERAL AGRI BUSINESS MANAGEMENT \": ";
    cin>>gbm;
    cout<<"\nEnter Grade for \" DEEP LEARNING \": ";
    cin>>dl;
    cout<<"\nEnter Grade for \" CAREER ENCHANCEMENT PROGRAM-II \": ";
    cin>>cep2;
    cout<<"\nEnter Grade for \" THEORY OF COMPUTATIONS \": ";
    cin>>toc;
    cout<<"\nEnter Grade for \" JAVA PROGRAMMING \": ";
    cin>>java;
    cout<<"\nEnter Grade for \" PROBABILITY, STATISTICS AND QUEUING THEORY \": ";
    cin>>maths4;
    cout<<"\nEnter Grade for \" BIOINFORMATICS \": ";
    cin>>bi;
    cout<<"\nEnter Grade for \" DESIGN AND ANALYSIS OF ALGORITHMS \": ";
    cin>>daa;
    
    map<string,int> credits ={ {"ee4",1},{"daalab",1}, {"gbm",1}, {"dl",4},{"cep2",1},{"toc",3},
                           {"java",4},{"maths4",4},{"bi",3},{"daa",3} };
    map<string,string> grade ={ {"ee4",ee4},{"daalab",daalab}, {"gbm",gbm}, {"dl",dl},{"cep2",cep2},{"toc",toc},
                           {"java",java},{"maths4",maths4},{"bi",bi},{"daa",daa} };
    return calci(credits,grade);
}

tuple<float,float,float,float> sem5()
{
    string nlp,fcv,ee5,nlplab,cvlab,evs,cn,se,cep3,mlops;
    cout<<"\nEnter Grade for \" NATURAL LANGUAGE PROCESSING \": ";
    cin>>nlp;
    cout<<"\nEnter Grade for \" FOUNDATION OF COMPUTER VISION \": ";
    cin>>fcv;
    cout<<"\nEnter Grade for \" ENGINEERING EXPLORATION-V \": ";
    cin>>ee5;
    cout<<"\nEnter Grade for \" NATURAL LANGUAGE PROCESSING LABORATORY \": ";
    cin>>nlplab;
    cout<<"\nEnter Grade for \" COMPUTER VISION LABORATORY \": ";
    cin>>cvlab;
    cout<<"\nEnter Grade for \" ENVIRONMENT SCIENCE AND ENGINEERING \": ";
    cin>>evs;
    cout<<"\nEnter Grade for \" COMPUTER NETWORKS \": ";
    cin>>cn;
    cout<<"\nEnter Grade for \" SOFTWARE ENGINEERING \": ";
    cin>>se;
    cout<<"\nEnter Grade for \" CAREER ENCHANCEMENT PROGRAM-III \": ";
    cin>>cep3;
    cout<<"\nEnter Grade for \" MLOPS \": ";
    cin>>mlops;
    
    map<string,int> credits = { {"nlp",3},{"fcv",3},{"ee5",1},{"nlplab",1},{"cvlab",1},{"evs",2},{"cn",4},
                                {"se",3},{"cep3",1},{"mlops",3} };
    map<string,string> grade = { {"nlp",nlp},{"fcv",fcv},{"ee5",ee5},{"nlplab",nlplab},{"cvlab",cvlab},{"evs",evs},{"cn",cn},
                                {"se",se},{"cep3",cep3},{"mlops",mlops} };
    return calci(credits,grade);
}

tuple<float,float,float,float> sem6()
{
    string dev,devlab,ann,ee6,annlab,cep4,dpm,rl,eai;
    cout<<"\nEnter Grade for \" DATA EXPLORATION AND VISUALIZATION \": ";
    cin>>dev;
    cout<<"\nEnter Grade for \" DATA EXPLORATION AND VISUALIZATION LABORATORY \": ";
    cin>>devlab;
    cout<<"\nEnter Grade for \" ARTIFICIAL NEURAL NETWORKS \": ";
    cin>>ann;  
    cout<<"\nEnter Grade for \" MINI PROJECT \": ";
    cin>>ee6;  
    cout<<"\nEnter Grade for \" ARTIFICIAL NEURAL NETWORK LABORATORY \": ";
    cin>>annlab;  
    cout<<"\nEnter Grade for \" CAREER ENCHANCEMENT PROGRAM-IV \": ";
    cin>>cep4;   
    cout<<"\nEnter Grade for \" DISASTER PREPAREDNESS AND MANAGEMENT \": ";
    cin>>dpm;
    cout<<"\nEnter Grade for \" REINFORCEMENT LEARNING \": ";
    cin>>rl;
    cout<<"\nEnter Grade for \" ETHICS AND AI \": ";
    cin>>eai;
    
    map<string,int> credits = { {"dev",3},{"devlab",2},{"ann",3},{"ee6",2},{"annlab",2},{"cep4",1},{"dpm",3},{"rl",3},{"eai",3} };
    map<string,string> grade = { {"dev",dev},{"devlab",devlab},{"ann",ann},{"ee6",ee6},{"annlab",annlab},{"cep4",cep4},{"dpm",dpm},{"rl",rl},{"eai",eai} };
    return calci(credits,grade);    
    
    
}

int main()
{
    cout<<" __________________________ WELCOME To FINAL YEAR AIML STUDENT CGPA CALCULATOR Of SIET ___________________________\n\n\n";
    cout<<"Upto Sem6 is updated in the server\n";
    
    cout<<"Note Only Grades are allowed for each input\n Example(Values Allowed): O, A+, A ,B, B+, C, U\n\n\n";
    cout<<"Instructions :\n\t1.Kindly Enter the Correct Grades Where the Subject order is changing for Sem3 !!!\n";
    cout<<"\t2.If you had or having Arrear and cleared means mention the PASS grade  else give U denotes Present Arrear \n";
    float totalcreditsearned, totalgrademarks,totalcredit,gradeearned;
    totalcredit=totalgrademarks=totalcreditsearned=gradeearned=0;
    
    cout<<"\n\n _______________________________  Semester-I  __________________________________\n\n";

    auto result = sem1();
    totalcreditsearned = get<0>(result);
    totalcredit =get<1>(result);
    totalgrademarks =get<2>(result);
    gradeearned=get<3>(result);
    display(totalcreditsearned,totalcredit,totalgrademarks,gradeearned);
    
    
    cout<<"\n\n _______________________________  Semester-II    _______________________________\n\n";

    
    auto result2 = sem2();
    totalcreditsearned = get<0>(result2);
    totalcredit =get<1>(result2);
    totalgrademarks =get<2>(result2);
    gradeearned=get<3>(result2);
    display(totalcreditsearned,totalcredit,totalgrademarks,gradeearned);
    
    cout<<"\n\n _______________________________  Semester-III   ________________________________\n\n";

    auto result3 = sem3();
    totalcreditsearned = get<0>(result3);
    totalcredit =get<1>(result3);
    totalgrademarks =get<2>(result3);
    gradeearned=get<3>(result3);
    display(totalcreditsearned,totalcredit,totalgrademarks, gradeearned);
    cout<<"\n\n _______________________________  Semester-IV    ________________________________\n\n";

    auto result4 = sem4();
    totalcreditsearned = get<0>(result4);
    totalcredit =get<1>(result4);
    totalgrademarks =get<2>(result4);
     gradeearned=get<3>(result4);
    display(totalcreditsearned,totalcredit,totalgrademarks,gradeearned);
    
    cout<<"\n\n _______________________________  Semester-V   ___________________________________\n\n";

    
    auto result5 = sem5();
    totalcreditsearned = get<0>(result5);
    totalcredit =get<1>(result5);
    totalgrademarks =get<2>(result5);
     gradeearned=get<3>(result5);
    display(totalcreditsearned,totalcredit,totalgrademarks, gradeearned);
    
    cout<<"\n\n _______________________________  Semester-VI   ___________________________________\n\n";
    
    auto result6 = sem6();
    totalcreditsearned = get<0>(result6);
    totalcredit =get<1>(result6);
    totalgrademarks =get<2>(result6);
    gradeearned=get<3>(result6);
    display(totalcreditsearned,totalcredit,totalgrademarks,gradeearned);
    
    
    cout<<"\n\n\n  ________  THANK YOU FOR BEING A VALUABLE STUDENT IN OUR COLLEGE__________\n\n\n";
    
    cout<<"_______________________________________________________________Developed by  Your Friend!!!!";
    
    
    
    
    return 0;
}    
