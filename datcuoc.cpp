void datcuoc1phan(int x,int y,int &x1,int &x2,int &x3,int &x4,int &x5,int &x6, int &score){
                        if((x >= 72 && x <= 520)&&( y >= 520 && y <= 585)&&score>0) {x1+=1000;
                        score-=1000;}
                       else if((x >= 570 && x <=1080 )&&( y >= 520 && y <= 585)&&score>0){x2+=1000;
                       score-=1000;}
                        else if((x >= 1087 && x <=1530 )&&( y >= 520 && y <= 585)&&score>0){x3+=1000;
                        score-=1000;}
                        else if((x >= 72 && x <=520 )&&( y >= 813 && y <= 840)&&score>0){x4+=1000;
                        score-=1000;}
                        else if((x >= 570 && x <=1080 )&&( y >= 813 && y <= 840)&&score>0){x5+=1000;
                        score-=1000;}
                        else if((x >= 1087 && x <=1370 )&&( y >= 813 && y <= 840)&&score>0){x6+=1000;
                        score-=1000;}
                        else if((x >= 187 && x <=400 )&&( y >= 334 && y <= 538)&&x1>0){x1-=1000;
                        score+=1000;}
                        else if((x >= 700 && x <=900 )&&( y >= 334 && y <= 538)&&x2>0){x2-=1000;
                        score+=1000;}
                        else if((x >= 1200 && x <=1415 )&&( y >= 334 && y <= 538)&&x3>0){x3-=1000;
                        score+=1000;}
                        else if((x >= 187 && x <=400 )&&( y >= 600 && y <= 800)&&x4>0){x4-=1000;
                        score+=1000;}
                        else if((x >= 700 && x <=900 )&&( y >= 600 && y <= 800)&&x5>0){x5-=1000;
                        score+=1000;}
                        else if((x >= 1200 && x <=1415 )&&( y >= 600 && y <= 800)&&x6>0){x6-=1000;
                        score+=1000;}
}
void datcuoctatca(int x,int y,int &x1,int &x2,int &x3,int &x4,int &x5,int &x6, int &score){
                        if((x >= 72 && x <= 520)&&( y >= 520 && y <= 585)&&score>0) {x1+=score;
                        score=0;}
                       else if((x >= 570 && x <=1080 )&&( y >= 520 && y <= 585)&&score>0){x2+=score;
                        score=0;}
                        else if((x >= 1087 && x <=1530 )&&( y >= 520 && y <= 585)&&score>0){x3+=score;
                        score=0;}
                        else if((x >= 72 && x <=520 )&&( y >= 813 && y <= 840)&&score>0){x4+=score;
                        score=0;}
                        else if((x >= 570 && x <=1080 )&&( y >= 813 && y <= 840)&&score>0){x5+=score;
                        score=0;}
                        else if((x >= 1087 && x <=1370 )&&( y >= 813 && y <= 840)&&score>0){x6+=score;
                        score=0;}
                        else if((x >= 187 && x <=400 )&&( y >= 334 && y <= 538)&&x1>0){score+=x1;
                        x1=0;}
                        else if((x >= 700 && x <=900 )&&( y >= 334 && y <= 538)&&x2>0){score+=x2;
                        x2=0;}
                        else if((x >= 1200 && x <=1415 )&&( y >= 334 && y <= 538)&&x3>0){score+=x3;
                        x3=0;}
                        else if((x >= 187 && x <=400 )&&( y >= 600 && y <= 800)&&x4>0){score+=x4;
                        x4=0;}
                        else if((x >= 700 && x <=900 )&&( y >= 600 && y <= 800)&&x5>0){score+=x5;
                        x5=0;}
                        else if((x >= 1200 && x <=1415 )&&( y >= 600 && y <= 800)&&x6>0){score+=x6;
                        x6=0;}



}
