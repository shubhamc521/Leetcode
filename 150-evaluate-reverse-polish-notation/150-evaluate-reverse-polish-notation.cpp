class Solution {
public:
    int evalRPN(vector<string>& token) {
        
        stack<int> s;
        
        for(int i=0; i< token.size(); i++){
            if(token[i]=="+" || token[i]=="-" || token[i]=="/" || token[i]=="*"  ){
                int op2 = s.top();
                s.pop();
            
                int op1 = s.top();
                s.pop();
            
            if(token[i]=="+") s.push(op1+op2);
            if(token[i]=="-") s.push(op1-op2);
            if(token[i]=="/") s.push(op1/op2);
            if(token[i]=="*") s.push(op1*op2);
            }
            
            else {
                s.push(stoi(token[i]));
            }   
        }
        
       return s.top();
        
    }
};